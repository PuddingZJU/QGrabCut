/********************************************************************************
** Form generated from reading UI file 'QGrabCut.ui'
**
** Created by: Qt User Interface Compiler version 5.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGRABCUT_H
#define UI_QGRABCUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_Open;
    QAction *action_New;
    QAction *action_Save;
    QAction *actionSave_All;
    QAction *actionSave_Image;
    QAction *action_Quit;
    QAction *actionLazyBrush;
    QAction *actionGrabCut;
    QAction *actionHist;
    QAction *actionUndo;
    QAction *actionRedo;
    QAction *actionMixture;
    QAction *actionHorizontal;
    QAction *actionVertical;
    QScrollArea *scroll_area;
    QMenuBar *menubar;
    QMenu *menu_File;
    QMenu *menu_Segment;
    QMenu *menu_Edit;
    QMenu *menu_Window;
    QMenu *menuImageWindow;
    QStatusBar *statusbar;
    QDockWidget *dockWidget;
    QStackedWidget *dockWidgetContents;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(905, 697);
        MainWindow->setDockOptions(QMainWindow::AllowNestedDocks|QMainWindow::AllowTabbedDocks|QMainWindow::AnimatedDocks);
        action_Open = new QAction(MainWindow);
        action_Open->setObjectName(QStringLiteral("action_Open"));
        action_New = new QAction(MainWindow);
        action_New->setObjectName(QStringLiteral("action_New"));
        action_Save = new QAction(MainWindow);
        action_Save->setObjectName(QStringLiteral("action_Save"));
        actionSave_All = new QAction(MainWindow);
        actionSave_All->setObjectName(QStringLiteral("actionSave_All"));
        actionSave_Image = new QAction(MainWindow);
        actionSave_Image->setObjectName(QStringLiteral("actionSave_Image"));
        action_Quit = new QAction(MainWindow);
        action_Quit->setObjectName(QStringLiteral("action_Quit"));
        actionLazyBrush = new QAction(MainWindow);
        actionLazyBrush->setObjectName(QStringLiteral("actionLazyBrush"));
        actionLazyBrush->setCheckable(true);
        actionLazyBrush->setChecked(false);
        actionGrabCut = new QAction(MainWindow);
        actionGrabCut->setObjectName(QStringLiteral("actionGrabCut"));
        actionGrabCut->setCheckable(true);
        actionGrabCut->setChecked(true);
        actionHist = new QAction(MainWindow);
        actionHist->setObjectName(QStringLiteral("actionHist"));
        actionHist->setCheckable(true);
        actionUndo = new QAction(MainWindow);
        actionUndo->setObjectName(QStringLiteral("actionUndo"));
        actionRedo = new QAction(MainWindow);
        actionRedo->setObjectName(QStringLiteral("actionRedo"));
        actionMixture = new QAction(MainWindow);
        actionMixture->setObjectName(QStringLiteral("actionMixture"));
        actionMixture->setCheckable(true);
        actionHorizontal = new QAction(MainWindow);
        actionHorizontal->setObjectName(QStringLiteral("actionHorizontal"));
        actionHorizontal->setCheckable(true);
        actionVertical = new QAction(MainWindow);
        actionVertical->setObjectName(QStringLiteral("actionVertical"));
        actionVertical->setCheckable(true);
        actionVertical->setChecked(true);
        scroll_area = new QScrollArea(MainWindow);
        scroll_area->setObjectName(QStringLiteral("scroll_area"));
        MainWindow->setCentralWidget(scroll_area);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 905, 23));
        menu_File = new QMenu(menubar);
        menu_File->setObjectName(QStringLiteral("menu_File"));
        menu_Segment = new QMenu(menubar);
        menu_Segment->setObjectName(QStringLiteral("menu_Segment"));
        menu_Edit = new QMenu(menubar);
        menu_Edit->setObjectName(QStringLiteral("menu_Edit"));
        menu_Window = new QMenu(menubar);
        menu_Window->setObjectName(QStringLiteral("menu_Window"));
        menuImageWindow = new QMenu(menu_Window);
        menuImageWindow->setObjectName(QStringLiteral("menuImageWindow"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);
        dockWidget = new QDockWidget(MainWindow);
        dockWidget->setObjectName(QStringLiteral("dockWidget"));
        dockWidget->setMinimumSize(QSize(80, 22));
        dockWidget->setMaximumSize(QSize(100000, 524287));
        dockWidget->setFeatures(QDockWidget::AllDockWidgetFeatures);
        dockWidget->setAllowedAreas(Qt::LeftDockWidgetArea|Qt::RightDockWidgetArea);
        dockWidgetContents = new QStackedWidget();
        dockWidgetContents->setObjectName(QStringLiteral("dockWidgetContents"));
        dockWidget->setWidget(dockWidgetContents);
        MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(2), dockWidget);

        menubar->addAction(menu_File->menuAction());
        menubar->addAction(menu_Edit->menuAction());
        menubar->addAction(menu_Segment->menuAction());
        menubar->addAction(menu_Window->menuAction());
        menu_File->addAction(action_Open);
        menu_File->addAction(action_New);
        menu_File->addSeparator();
        menu_File->addAction(action_Save);
        menu_File->addAction(actionSave_All);
        menu_File->addAction(actionSave_Image);
        menu_File->addSeparator();
        menu_File->addAction(action_Quit);
        menu_Segment->addAction(actionLazyBrush);
        menu_Segment->addAction(actionGrabCut);
        menu_Segment->addAction(actionHist);
        menu_Segment->addAction(actionMixture);
        menu_Edit->addAction(actionUndo);
        menu_Edit->addAction(actionRedo);
        menu_Window->addAction(menuImageWindow->menuAction());
        menuImageWindow->addAction(actionHorizontal);
        menuImageWindow->addAction(actionVertical);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        action_Open->setText(QApplication::translate("MainWindow", "&Open", 0));
        action_New->setText(QApplication::translate("MainWindow", "&New", 0));
        action_Save->setText(QApplication::translate("MainWindow", "&Save", 0));
        actionSave_All->setText(QApplication::translate("MainWindow", "Save All", 0));
        actionSave_Image->setText(QApplication::translate("MainWindow", "Save Image", 0));
        action_Quit->setText(QApplication::translate("MainWindow", "&Quit", 0));
        actionLazyBrush->setText(QApplication::translate("MainWindow", "LazyBrush", 0));
        actionGrabCut->setText(QApplication::translate("MainWindow", "GrabCut", 0));
        actionHist->setText(QApplication::translate("MainWindow", "GraphCut", 0));
        actionUndo->setText(QApplication::translate("MainWindow", "Undo", 0));
        actionUndo->setShortcut(QApplication::translate("MainWindow", "Ctrl+Z", 0));
        actionRedo->setText(QApplication::translate("MainWindow", "Redo", 0));
        actionRedo->setShortcut(QApplication::translate("MainWindow", "Ctrl+Y", 0));
        actionMixture->setText(QApplication::translate("MainWindow", "Mixture", 0));
        actionHorizontal->setText(QApplication::translate("MainWindow", "Horizontal", 0));
        actionVertical->setText(QApplication::translate("MainWindow", "Vertical", 0));
        menu_File->setTitle(QApplication::translate("MainWindow", "&File", 0));
        menu_Segment->setTitle(QApplication::translate("MainWindow", "Segment", 0));
        menu_Edit->setTitle(QApplication::translate("MainWindow", "&Edit", 0));
        menu_Window->setTitle(QApplication::translate("MainWindow", "&Window", 0));
        menuImageWindow->setTitle(QApplication::translate("MainWindow", "ImageWindow", 0));
        dockWidget->setWindowTitle(QApplication::translate("MainWindow", "Segment Param", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGRABCUT_H
