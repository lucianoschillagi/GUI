/*
  ==============================================================================

    WallComponent.h
    Created: 18 Apr 2019 6:48:36pm
    Author:  Luciano Schillagi

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"

//==============================================================================
/*
*/
class WallComponent    : public Component
{
public:
    WallComponent();
    ~WallComponent();

    void paint (Graphics&) override;
    void resized() override;

private:
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (WallComponent)
};
