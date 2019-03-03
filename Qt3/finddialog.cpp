#include "finddialog.h"
#include <QHBoxLayout>
#include <QVBoxLayout>
FindDialog::FindDialog(QWidget *parent)
    : QDialog(parent)
{
    //初始化控件
    mLabel = new QLabel(tr("Find &What:"));
    mLineEdit = new QLineEdit;
    mLabel->setBuddy(mLineEdit);

    CaseMath = new QCheckBox(tr("Math &Case"));
    BackWord = new QCheckBox(tr("Seach &BackWord"));

    mFindBtn = new QPushButton(tr("&Find"));
    mFindBtn->setEnabled(false);

    mCloseBtn = new QPushButton(tr("&Quit"));

    //信号槽绑定
    connect(mLineEdit,SIGNAL(textChanged(QString)),this,SLOT(onEnableFindBtn(QString)));
    connect(mFindBtn,SIGNAL(clicked(bool)),this,SLOT(onFindClicked()));
    connect(mCloseBtn,SIGNAL(clicked(bool)),this,SLOT(close()));

    //布局
    QHBoxLayout *leftTop = new QHBoxLayout;
    leftTop->addWidget(mLabel);
    leftTop->addWidget(mLineEdit);

    QVBoxLayout *left = new QVBoxLayout;
    left->addLayout(leftTop);
    left->addWidget(CaseMath);
    left->addWidget(BackWord);

    QVBoxLayout *right = new QVBoxLayout;
    right->addWidget(mFindBtn);
    right->addWidget(mCloseBtn);

    QHBoxLayout *mainLayout = new QHBoxLayout;
    mainLayout->addLayout(left);
    mainLayout->addLayout(right);

    setWindowTitle(tr("Find"));
    setLayout(mainLayout);
}

FindDialog::~FindDialog()
{

}

void FindDialog::onFindClicked()
{
    QString text = mLineEdit->text();
    Qt::CaseSensitivity cs = CaseMath->isChecked()?Qt::CaseInsensitive:Qt::CaseInsensitive;
    if(BackWord->isChecked())
    {   emit findPrevious(text,cs);}
    else
    {   emit findNext(text,cs);}
}

void FindDialog::onEnableFindBtn(const QString &text)
{
    mFindBtn->setEnabled(!text.isEmpty());
}
