/********************************************************************************
** Form generated from reading UI file 'ParamWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PARAMWIDGET_H
#define UI_PARAMWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ParamWidget
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    QLabel *label;
    QPushButton *ObjColorBt;
    QLabel *label_2;
    QPushButton *BkgColorBt;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_2;
    QLabel *label_6;
    QLineEdit *lamda_lineEdit;
    QLabel *label_5;
    QLineEdit *kappa_lineEdit;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QRadioButton *paint_obj_radioButton;
    QComboBox *comboBox_obj;
    QHBoxLayout *horizontalLayout_6;
    QRadioButton *paint_bkg_radioButton;
    QComboBox *comboBox_bkg;
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout_5;
    QSlider *dot_width_slider;
    QLabel *dot_label_num;
    QLabel *dot_label;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_6;
    QToolButton *zoom_in;
    QToolButton *zoom_out;
    QSlider *image_slider;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox_13;
    QVBoxLayout *verticalLayout_6;
    QRadioButton *use_log_input;
    QRadioButton *use_canny_input;
    QGroupBox *groupBox_10;
    QVBoxLayout *verticalLayout_7;
    QCheckBox *canny_checkbox;
    QCheckBox *canny_erode_checkbox;
    QWidget *page_2;
    QVBoxLayout *verticalLayout_8;
    QGroupBox *groupBox_7;
    QVBoxLayout *verticalLayout_5;
    QRadioButton *linear_radioButton;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *nolinear_radioButton;
    QComboBox *comboBox;
    QGroupBox *groupBox_8;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *edge_weight_lineEdit;
    QGroupBox *groupBox_6;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_7;
    QLineEdit *canny_min_edit;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_8;
    QLineEdit *canny_max_edit;
    QPushButton *excute_bt;

    void setupUi(QWidget *ParamWidget)
    {
        if (ParamWidget->objectName().isEmpty())
            ParamWidget->setObjectName(QStringLiteral("ParamWidget"));
        ParamWidget->resize(203, 753);
        verticalLayout = new QVBoxLayout(ParamWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupBox_2 = new QGroupBox(ParamWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setLayoutDirection(Qt::LeftToRight);
        groupBox_2->setAutoFillBackground(true);
        groupBox_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        groupBox_2->setFlat(false);
        groupBox_2->setCheckable(false);
        gridLayout = new QGridLayout(groupBox_2);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(groupBox_2);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        ObjColorBt = new QPushButton(groupBox_2);
        ObjColorBt->setObjectName(QStringLiteral("ObjColorBt"));
        ObjColorBt->setAutoFillBackground(false);
        ObjColorBt->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 0);"));
        ObjColorBt->setCheckable(false);
        ObjColorBt->setChecked(false);
        ObjColorBt->setAutoDefault(false);
        ObjColorBt->setFlat(false);

        gridLayout->addWidget(ObjColorBt, 0, 1, 1, 1);

        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        BkgColorBt = new QPushButton(groupBox_2);
        BkgColorBt->setObjectName(QStringLiteral("BkgColorBt"));
        BkgColorBt->setAutoFillBackground(false);
        BkgColorBt->setStyleSheet(QStringLiteral("background-color: rgb(255, 0, 0);"));
        BkgColorBt->setCheckable(false);
        BkgColorBt->setChecked(false);
        BkgColorBt->setAutoDefault(false);
        BkgColorBt->setDefault(false);
        BkgColorBt->setFlat(false);

        gridLayout->addWidget(BkgColorBt, 1, 1, 1, 1);


        verticalLayout->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(ParamWidget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        gridLayout_2 = new QGridLayout(groupBox_3);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label_6 = new QLabel(groupBox_3);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_2->addWidget(label_6, 0, 0, 1, 1);

        lamda_lineEdit = new QLineEdit(groupBox_3);
        lamda_lineEdit->setObjectName(QStringLiteral("lamda_lineEdit"));

        gridLayout_2->addWidget(lamda_lineEdit, 0, 1, 1, 1);

        label_5 = new QLabel(groupBox_3);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_2->addWidget(label_5, 1, 0, 1, 1);

        kappa_lineEdit = new QLineEdit(groupBox_3);
        kappa_lineEdit->setObjectName(QStringLiteral("kappa_lineEdit"));

        gridLayout_2->addWidget(kappa_lineEdit, 1, 1, 1, 1);


        verticalLayout->addWidget(groupBox_3);

        groupBox = new QGroupBox(ParamWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout_3 = new QVBoxLayout(groupBox);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        paint_obj_radioButton = new QRadioButton(groupBox);
        paint_obj_radioButton->setObjectName(QStringLiteral("paint_obj_radioButton"));
        paint_obj_radioButton->setChecked(true);

        horizontalLayout->addWidget(paint_obj_radioButton);

        comboBox_obj = new QComboBox(groupBox);
        comboBox_obj->setObjectName(QStringLiteral("comboBox_obj"));

        horizontalLayout->addWidget(comboBox_obj);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        paint_bkg_radioButton = new QRadioButton(groupBox);
        paint_bkg_radioButton->setObjectName(QStringLiteral("paint_bkg_radioButton"));
        paint_bkg_radioButton->setChecked(false);

        horizontalLayout_6->addWidget(paint_bkg_radioButton);

        comboBox_bkg = new QComboBox(groupBox);
        comboBox_bkg->setObjectName(QStringLiteral("comboBox_bkg"));

        horizontalLayout_6->addWidget(comboBox_bkg);


        verticalLayout_3->addLayout(horizontalLayout_6);


        verticalLayout->addWidget(groupBox);

        groupBox_5 = new QGroupBox(ParamWidget);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        gridLayout_5 = new QGridLayout(groupBox_5);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        dot_width_slider = new QSlider(groupBox_5);
        dot_width_slider->setObjectName(QStringLiteral("dot_width_slider"));
        dot_width_slider->setMinimum(1);
        dot_width_slider->setMaximum(25);
        dot_width_slider->setPageStep(5);
        dot_width_slider->setValue(10);
        dot_width_slider->setOrientation(Qt::Horizontal);
        dot_width_slider->setTickPosition(QSlider::TicksBelow);
        dot_width_slider->setTickInterval(4);

        gridLayout_5->addWidget(dot_width_slider, 0, 0, 1, 2);

        dot_label_num = new QLabel(groupBox_5);
        dot_label_num->setObjectName(QStringLiteral("dot_label_num"));
        dot_label_num->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        dot_label_num->setFrameShape(QFrame::NoFrame);
        dot_label_num->setFrameShadow(QFrame::Plain);
        dot_label_num->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(dot_label_num, 1, 0, 1, 1);

        dot_label = new QLabel(groupBox_5);
        dot_label->setObjectName(QStringLiteral("dot_label"));
        dot_label->setMinimumSize(QSize(0, 25));
        dot_label->setStyleSheet(QStringLiteral(""));
        dot_label->setFrameShape(QFrame::NoFrame);
        dot_label->setFrameShadow(QFrame::Plain);
        dot_label->setMidLineWidth(1);
        dot_label->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(dot_label, 1, 1, 1, 1);


        verticalLayout->addWidget(groupBox_5);

        groupBox_4 = new QGroupBox(ParamWidget);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        gridLayout_6 = new QGridLayout(groupBox_4);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        zoom_in = new QToolButton(groupBox_4);
        zoom_in->setObjectName(QStringLiteral("zoom_in"));

        gridLayout_6->addWidget(zoom_in, 0, 0, 1, 1);

        zoom_out = new QToolButton(groupBox_4);
        zoom_out->setObjectName(QStringLiteral("zoom_out"));

        gridLayout_6->addWidget(zoom_out, 0, 1, 1, 1);

        image_slider = new QSlider(groupBox_4);
        image_slider->setObjectName(QStringLiteral("image_slider"));
        image_slider->setMinimum(-10);
        image_slider->setMaximum(10);
        image_slider->setSingleStep(1);
        image_slider->setSliderPosition(0);
        image_slider->setOrientation(Qt::Horizontal);
        image_slider->setInvertedAppearance(false);
        image_slider->setInvertedControls(false);
        image_slider->setTickInterval(0);

        gridLayout_6->addWidget(image_slider, 1, 0, 1, 2);


        verticalLayout->addWidget(groupBox_4);

        stackedWidget = new QStackedWidget(ParamWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        verticalLayout_2 = new QVBoxLayout(page);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout_2->setContentsMargins(0, -1, 0, -1);
        groupBox_13 = new QGroupBox(page);
        groupBox_13->setObjectName(QStringLiteral("groupBox_13"));
        groupBox_13->setMinimumSize(QSize(0, 80));
        verticalLayout_6 = new QVBoxLayout(groupBox_13);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        use_log_input = new QRadioButton(groupBox_13);
        use_log_input->setObjectName(QStringLiteral("use_log_input"));
        use_log_input->setChecked(true);

        verticalLayout_6->addWidget(use_log_input);

        use_canny_input = new QRadioButton(groupBox_13);
        use_canny_input->setObjectName(QStringLiteral("use_canny_input"));

        verticalLayout_6->addWidget(use_canny_input);


        verticalLayout_2->addWidget(groupBox_13);

        groupBox_10 = new QGroupBox(page);
        groupBox_10->setObjectName(QStringLiteral("groupBox_10"));
        groupBox_10->setMinimumSize(QSize(0, 80));
        verticalLayout_7 = new QVBoxLayout(groupBox_10);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        canny_checkbox = new QCheckBox(groupBox_10);
        canny_checkbox->setObjectName(QStringLiteral("canny_checkbox"));

        verticalLayout_7->addWidget(canny_checkbox);

        canny_erode_checkbox = new QCheckBox(groupBox_10);
        canny_erode_checkbox->setObjectName(QStringLiteral("canny_erode_checkbox"));
        canny_erode_checkbox->setEnabled(false);
        canny_erode_checkbox->setCheckable(true);

        verticalLayout_7->addWidget(canny_erode_checkbox);


        verticalLayout_2->addWidget(groupBox_10);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        verticalLayout_8 = new QVBoxLayout(page_2);
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setContentsMargins(11, 11, 11, 11);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, -1, 0, -1);
        groupBox_7 = new QGroupBox(page_2);
        groupBox_7->setObjectName(QStringLiteral("groupBox_7"));
        groupBox_7->setMinimumSize(QSize(0, 80));
        verticalLayout_5 = new QVBoxLayout(groupBox_7);
        verticalLayout_5->setSpacing(9);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(9, 9, 9, -1);
        linear_radioButton = new QRadioButton(groupBox_7);
        linear_radioButton->setObjectName(QStringLiteral("linear_radioButton"));
        linear_radioButton->setChecked(true);

        verticalLayout_5->addWidget(linear_radioButton);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        nolinear_radioButton = new QRadioButton(groupBox_7);
        nolinear_radioButton->setObjectName(QStringLiteral("nolinear_radioButton"));

        horizontalLayout_2->addWidget(nolinear_radioButton);

        comboBox = new QComboBox(groupBox_7);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        horizontalLayout_2->addWidget(comboBox);


        verticalLayout_5->addLayout(horizontalLayout_2);


        verticalLayout_8->addWidget(groupBox_7);

        groupBox_8 = new QGroupBox(page_2);
        groupBox_8->setObjectName(QStringLiteral("groupBox_8"));
        horizontalLayout_3 = new QHBoxLayout(groupBox_8);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(groupBox_8);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        edge_weight_lineEdit = new QLineEdit(groupBox_8);
        edge_weight_lineEdit->setObjectName(QStringLiteral("edge_weight_lineEdit"));

        horizontalLayout_3->addWidget(edge_weight_lineEdit);


        verticalLayout_8->addWidget(groupBox_8);

        stackedWidget->addWidget(page_2);

        verticalLayout->addWidget(stackedWidget);

        groupBox_6 = new QGroupBox(ParamWidget);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        groupBox_6->setMinimumSize(QSize(0, 80));
        verticalLayout_4 = new QVBoxLayout(groupBox_6);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(12);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_7 = new QLabel(groupBox_6);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_5->addWidget(label_7);

        canny_min_edit = new QLineEdit(groupBox_6);
        canny_min_edit->setObjectName(QStringLiteral("canny_min_edit"));

        horizontalLayout_5->addWidget(canny_min_edit);


        verticalLayout_4->addLayout(horizontalLayout_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(12);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_8 = new QLabel(groupBox_6);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_4->addWidget(label_8);

        canny_max_edit = new QLineEdit(groupBox_6);
        canny_max_edit->setObjectName(QStringLiteral("canny_max_edit"));

        horizontalLayout_4->addWidget(canny_max_edit);


        verticalLayout_4->addLayout(horizontalLayout_4);


        verticalLayout->addWidget(groupBox_6);

        excute_bt = new QPushButton(ParamWidget);
        excute_bt->setObjectName(QStringLiteral("excute_bt"));
        excute_bt->setCheckable(false);
        excute_bt->setChecked(false);
        excute_bt->setAutoRepeat(true);

        verticalLayout->addWidget(excute_bt);


        retranslateUi(ParamWidget);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(ParamWidget);
    } // setupUi

    void retranslateUi(QWidget *ParamWidget)
    {
        ParamWidget->setWindowTitle(QApplication::translate("ParamWidget", "ParamWidget", 0));
        groupBox_2->setTitle(QApplication::translate("ParamWidget", "\351\200\211\346\213\251\351\242\234\350\211\262", 0));
        label->setText(QApplication::translate("ParamWidget", "\345\211\215\346\231\257\350\211\262", 0));
        ObjColorBt->setText(QString());
        ObjColorBt->setShortcut(QApplication::translate("ParamWidget", "Ctrl+O", 0));
        label_2->setText(QApplication::translate("ParamWidget", "\350\203\214\346\231\257\350\211\262", 0));
        BkgColorBt->setText(QString());
        BkgColorBt->setShortcut(QApplication::translate("ParamWidget", "Ctrl+O", 0));
        groupBox_3->setTitle(QApplication::translate("ParamWidget", "\345\217\202\346\225\260", 0));
        label_6->setText(QApplication::translate("ParamWidget", "lamda", 0));
#ifndef QT_NO_WHATSTHIS
        lamda_lineEdit->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        lamda_lineEdit->setInputMask(QString());
        lamda_lineEdit->setText(QApplication::translate("ParamWidget", "1.5", 0));
        label_5->setText(QApplication::translate("ParamWidget", "kappa", 0));
#ifndef QT_NO_WHATSTHIS
        kappa_lineEdit->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        kappa_lineEdit->setInputMask(QString());
        kappa_lineEdit->setText(QApplication::translate("ParamWidget", "4.0", 0));
        groupBox->setTitle(QApplication::translate("ParamWidget", "\351\200\211\346\213\251\345\211\215\350\203\214\346\231\257", 0));
        paint_obj_radioButton->setText(QApplication::translate("ParamWidget", "\346\266\202\351\270\246Object", 0));
        comboBox_obj->clear();
        comboBox_obj->insertItems(0, QStringList()
         << QApplication::translate("ParamWidget", "\347\202\271", 0)
         << QApplication::translate("ParamWidget", "\347\237\251\345\275\242", 0)
        );
        paint_bkg_radioButton->setText(QApplication::translate("ParamWidget", "\346\266\202\351\270\246Background", 0));
        comboBox_bkg->clear();
        comboBox_bkg->insertItems(0, QStringList()
         << QApplication::translate("ParamWidget", "\347\202\271", 0)
         << QApplication::translate("ParamWidget", "\347\237\251\345\275\242", 0)
        );
        groupBox_5->setTitle(QApplication::translate("ParamWidget", "\347\254\224\345\210\267\345\244\247\345\260\217", 0));
        dot_label_num->setText(QString());
        dot_label->setText(QString());
        groupBox_4->setTitle(QApplication::translate("ParamWidget", "\345\233\276\345\203\217\347\274\251\346\224\276", 0));
        zoom_in->setText(QApplication::translate("ParamWidget", "+", 0));
        zoom_out->setText(QApplication::translate("ParamWidget", "-", 0));
        groupBox_13->setTitle(QApplication::translate("ParamWidget", "Edge\351\200\211\351\241\271", 0));
        use_log_input->setText(QApplication::translate("ParamWidget", "\344\275\277\347\224\250LoG\344\275\234\344\270\272\350\276\223\345\205\245", 0));
        use_canny_input->setText(QApplication::translate("ParamWidget", "\344\275\277\347\224\250Canny\344\275\234\344\270\272\350\276\223\345\205\245", 0));
        groupBox_10->setTitle(QApplication::translate("ParamWidget", "Canny\351\200\211\351\241\271", 0));
        canny_checkbox->setText(QApplication::translate("ParamWidget", "\344\275\277\347\224\250Canny\345\242\236\345\274\272\350\276\271\347\274\230", 0));
        canny_erode_checkbox->setText(QApplication::translate("ParamWidget", "\345\257\271Canny\347\273\223\346\236\234Erode", 0));
        groupBox_7->setTitle(QApplication::translate("ParamWidget", "\347\273\204\345\220\210\346\226\271\345\274\217", 0));
        linear_radioButton->setText(QApplication::translate("ParamWidget", "\347\272\277\346\200\247", 0));
        nolinear_radioButton->setText(QApplication::translate("ParamWidget", "\351\235\236\347\272\277\346\200\247", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("ParamWidget", "\345\271\263\346\226\271", 0)
         << QApplication::translate("ParamWidget", "\347\253\213\346\226\271", 0)
        );
        groupBox_8->setTitle(QApplication::translate("ParamWidget", "GroupBox", 0));
        label_3->setText(QApplication::translate("ParamWidget", "Edge\346\257\224\351\207\215", 0));
        groupBox_6->setTitle(QApplication::translate("ParamWidget", "Canny\345\217\202\346\225\260", 0));
        label_7->setText(QApplication::translate("ParamWidget", "canny_min", 0));
#ifndef QT_NO_WHATSTHIS
        canny_min_edit->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        canny_min_edit->setInputMask(QString());
        canny_min_edit->setText(QApplication::translate("ParamWidget", "60", 0));
        label_8->setText(QApplication::translate("ParamWidget", "canny_max", 0));
#ifndef QT_NO_WHATSTHIS
        canny_max_edit->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        canny_max_edit->setInputMask(QString());
        canny_max_edit->setText(QApplication::translate("ParamWidget", "180", 0));
        excute_bt->setText(QApplication::translate("ParamWidget", "\346\211\247\350\241\214", 0));
        excute_bt->setShortcut(QApplication::translate("ParamWidget", "Ctrl+X", 0));
    } // retranslateUi

};

namespace Ui {
    class ParamWidget: public Ui_ParamWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PARAMWIDGET_H
