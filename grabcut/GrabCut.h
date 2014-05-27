#ifndef _GRABCUT_H
#define _GRABCUT_H

#include "cv.h"
#include "cv.hpp"
#include <iostream>

#include "graph.h"
#include "GMM.h"

enum GCOrientation
{
	GC_LEFT = 0,
	GC_UP_LEFT,
	GC_UP,
	GC_UP_RIGHT,

	GC_NLINK_COUNT = 4
};

typedef Graph<float, float, float> MyGraph;

void ErrorFunc(char *error_msg);

class QGrabCut;

namespace NMH{
	class GrabCutSegmentor;
}

class GrabCut
{
	friend class QGrabCut;
	friend class NMH::GrabCutSegmentor;

public:
	GrabCut(cv::Mat &img);
	~GrabCut();

	void init(int min_x, int max_x, int min_y, int max_y);
	void run();
	int run_once();
	void set_hard_segment(std::vector<cv::Point> &points, TrimapValue map_value);

	cv::Mat& get_trimap()
	{
		return trimap;
	}

	cv::Mat& get_segment()
	{
		return segment;
	}

private:
	void calc_beta();
	void calc_nlink(bool with_edge_component = false);
	void calc_tlink();
	void construct_graph();
	void build_gmm();

private:

	double beta; //nlink�ı���ϵ��
	double lambda; //ϵ��
	double L;	//tlink�������ֵ

	cv::Mat img;

	cv::Mat component;
	cv::Mat segment;

	cv::Mat trimap;	// ���ڿ����û�����

	cv::Mat nlink;
	cv::Mat tlink;

	MyGraph *graph;
	ImageGMM *image_gmm;
};


#endif