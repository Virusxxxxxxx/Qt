#ifndef MYMODELVIEW_H
#define MYMODELVIEW_H

#include <QWidget>

namespace Ui {
class myModelView;
}

class myModelView : public QWidget
{
    Q_OBJECT

public:
    explicit myModelView(QWidget *parent = 0);
    ~myModelView();

private:
    Ui::myModelView *ui;
};

#endif // MYMODELVIEW_H
