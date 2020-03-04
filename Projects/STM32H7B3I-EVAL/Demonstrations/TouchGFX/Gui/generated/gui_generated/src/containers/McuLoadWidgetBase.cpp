/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/containers/McuLoadWidgetBase.hpp>
#include <texts/TextKeysAndLanguages.hpp>
#include <touchgfx/Color.hpp>

McuLoadWidgetBase::McuLoadWidgetBase()
{
    setWidth(162);
    setHeight(27);

    mcuLoadTxt.setXY(0, 0);
    mcuLoadTxt.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    mcuLoadTxt.setLinespacing(0);
    mcuLoadTxt.setTypedText(touchgfx::TypedText(T_DEMO_VIEW_MCU_LOAD_TEXT));

    mcuLoadValueTxt.setPosition(89, 0, 68, 27);
    mcuLoadValueTxt.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    mcuLoadValueTxt.setLinespacing(0);
    mcuLoadValueTxtBuffer[0] = 0;
    mcuLoadValueTxt.setWildcard(mcuLoadValueTxtBuffer);
    mcuLoadValueTxt.setTypedText(touchgfx::TypedText(T_DEMO_VIEW_MCU_LOAD_VALUE));

    add(mcuLoadTxt);
    add(mcuLoadValueTxt);
}

void McuLoadWidgetBase::initialize()
{
	
}