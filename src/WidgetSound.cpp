#include "WidgetSound.h"


WidgetSound::WidgetSound(uint8_t ucItem)
{
    _Item=ucItem;
    memset(pDataStatusTopic,0,sizeof(pDataStatusTopic));
    sprintf(pDataStatusTopic,"channel/sound_%d/data/status",_Item);
}

WidgetSound::~WidgetSound()
{
}

void WidgetSound::begin(void (*UserCallBack)(void))
{
}

void WidgetSound::displaySoundStatus(uint8_t ucVal)
{
    IntoRobot.publish(pDataStatusTopic,ucVal);
}




