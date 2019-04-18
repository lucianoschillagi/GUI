/*
  ==============================================================================

    TextComponent.h
    Created: 18 Apr 2019 7:48:13pm
    Author:  Luciano Schillagi

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"

//==============================================================================
/*
*/
class TextComponent    : public Component
{
public:
    TextComponent();
    ~TextComponent();

    void paint (Graphics&) override;
    void resized() override;

private:
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (TextComponent)
};
