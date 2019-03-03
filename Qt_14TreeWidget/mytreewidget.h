#ifndef MYTREEWIDGET_H
#define MYTREEWIDGET_H

#include <QWidget>
#include <QMenu>
#include <QAction>
#include <QContextMenuEvent>
namespace Ui {
class myTreeWidget;
}

class myTreeWidget : public QWidget
{
    Q_OBJECT

public:
    explicit myTreeWidget(QWidget *parent = 0);
    ~myTreeWidget();
    void initTreeWidget();
    void creatMenu();
protected:
    void contextMenuEvent(QContextMenuEvent *event);
private:
    Ui::myTreeWidget *ui;
    QMenu *m_Addmenu;
    QMenu *PopMenu;

    QAction *m_AddSchoolAction;
    QAction *m_AddClassAction;

    QAction *m_DelAction;
};

#endif // MYTREEWIDGET_H
