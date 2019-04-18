/*
  ==============================================================================

    GrassComponent.h
    Created: 18 Apr 2019 7:13:01pm
    Author:  Luciano Schillagi

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"

//==============================================================================
/*
*/
class GrassComponent    : public Component
{
public:
    GrassComponent();
    ~GrassComponent();

    void paint (Graphics&) override;
    void resized() override;

private:
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (GrassComponent)
};
