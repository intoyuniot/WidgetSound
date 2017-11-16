#ifndef WIDGET_SOUND_H_
#define WIDGET_SOUND_H_

#include "application.h"

class WidgetSound
{
    public:
        WidgetSound(uint8_t ucItem = 0);
        ~WidgetSound();
        void begin(void (*UserCallBack)(void) = NULL);
        void displaySoundStatus(uint8_t ucVal);

    private:
        char pDataStatusTopic[64];
        uint8_t _Item=0;
};

#endif
