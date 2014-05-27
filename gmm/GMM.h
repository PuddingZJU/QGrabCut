#ifndef _GMM_H
#define _GMM_H

#include "cv.hpp"
#include "highgui.h"

#define CHANNEL_NUM 3
#define VALUE_TYPE CV_32FC1
#define MIN_STOP_PROB_DIFF 1

cv::Mat convert2mat(const cv::Vec3b &color);

class Gaussian
{
public:
	Gaussian();

	cv::Mat mean;	//��ֵ

	cv::Mat covariance;	//Э����
	cv::Mat inverse;	//Э�������
	float determinant;	//����ʽ
	float weight;	//Ȩ��

	cv::Mat eigen_vectors;		//Э�������������
	cv::Mat eigen_values;	//Э���������ֵ
};

class GaussianModify
{
public:
	GaussianModify();
	~GaussianModify(){}

	void add(cv::Mat &color);
	void modify_gaussian(Gaussian &gaussian, int total_num);
	void clear()
	{
		mats.clear();
		count = 0;

		sum.setTo(cv::Scalar::all(0));
		product.setTo(cv::Scalar::all(0));
	}

private:
	///
	cv::Mat sum;
	cv::Mat product;
	
	///
	std::vector<cv::Mat> mats;
	int count;
};

enum TrimapValue 
{ 
	TrimapUnknown,
	TrimapForeground,
	TrimapBackground
};

enum SegmentationValue
{ 
	SegmentationForeground, 
	SegmentationBackground
};

class ImageGMM;

class GMM
{
	friend class ImageGMM;

public:
	GMM(int K);
	~GMM();

	float probability(const cv::Mat &color);
	float probability(const cv::Mat &color, int gaussian_idx);
	int which_component(const cv::Mat &color);

private:
	int K;
	Gaussian *gaussian;
};

class ImageGMM
{
public:
	ImageGMM(int K);
	~ImageGMM();

	void build(cv::Mat &img, cv::Mat &component, cv::Mat &segment);
	void learn(cv::Mat &img, cv::Mat &component, cv::Mat &segment);

	int which_component(cv::Mat &color, SegmentationValue segm)
	{
		if (segm == SegmentationBackground)
			return bkg_gmm.which_component(color);
		else 
			return fore_gmm.which_component(color);
	}

	float probability(const cv::Mat &color, SegmentationValue segm)
	{
		if (segm == SegmentationBackground)
			return bkg_gmm.probability(color);
		else 
			return fore_gmm.probability(color);
	}

private:
	void EM(cv::Mat &img, cv::Mat &segment, GMM &gmm, SegmentationValue seg);

private:
	int K;
	GMM fore_gmm;
	GMM bkg_gmm;

	GaussianModify *fg_modifies;
	GaussianModify *bkg_modifies;
};
#endif