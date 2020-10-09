#ifndef SAMPLETABLEWIDGET_H
#define SAMPLETABLEWIDGET_H

#include <QWidget>

namespace Ui {
class SampleTableWidget;
}

class SampleTableWidget : public QWidget
{
    Q_OBJECT

public:
    explicit SampleTableWidget(QWidget *parent = nullptr);
    ~SampleTableWidget();

private:
    Ui::SampleTableWidget *ui;
};

#endif // SAMPLETABLEWIDGET_H
