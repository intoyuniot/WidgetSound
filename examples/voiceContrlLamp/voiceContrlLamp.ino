/*
 ************************************************************************
 * 作者:  IntoRobot Team
 * 版本:  V1.0.0
 * 日期:  03-30-15
 ************************************************************************
 功能描述：
 声控灯：单击掌开灯， 双（多）击掌关灯

 所需器件:
 1.声音传感器模块
 2.LED灯泡

 接线说明:
 声音传感器模块               核心板
 1.VCC                        +3.3V
 2.GND                        GND
 3.OUT                        D0

 */

#include <WidgetSound.h>

#define SoundSensorINPUT     D0

WidgetSound sound = WidgetSound();

void setup()
{
    pinMode(SoundSensorINPUT, INPUT_PULLUP);
}

void loop()
{
    if(!digitalRead(SoundSensorINPUT))
    {
        sound.displaySoundStatus(1);
    }
    else
    {
        sound.displaySoundStatus(0);
    }

    delay(3000);
}
