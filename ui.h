#ifndef UI_H
#define UI_H

#include <QKeyEvent>
#include <QLabel>

#include "joystickdisplay.h"
#include "gamepaddisplay.h"

class VoipVideoWidget;

class WindowUi : public QWidget
{
    Q_OBJECT

public:
    explicit WindowUi(QWidget *parent = 0);
    ~WindowUi();

    QLabel *dpanic_lnl;

public Q_SLOTS:
    //

protected:
    //

private:
    void CreateUI();
    JoystickDisplay *joystickdisplay;
    GamepadDisplay *gamepaddisplay;

    //Gstreamer://
    VoipVideoWidget *camera1_videoWidget;
    //////////////
};

#endif // UI_H
