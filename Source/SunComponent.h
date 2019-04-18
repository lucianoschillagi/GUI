/*
  ==============================================================================

    SunComponent.h
    Created: 18 Apr 2019 7:40:34pm
    Author:  Luciano Schillagi

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"

//==============================================================================
/*
*/
class SunComponent    : public Component
{
public:
    SunComponent();
    ~SunComponent();

    void paint (Graphics&) override;
    void resized() override;

private:
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (SunComponent)
};
