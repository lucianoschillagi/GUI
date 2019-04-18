/*
  ==============================================================================

    This file was auto-generated!

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"
#include "WallComponent.h"
#include "GrassComponent.h"
#include "RoofComponent.h"
#include "SunComponent.h"
#include "TextComponent.h"

//==============================================================================
/*
    This component lives inside our window, and this is where you should put all
    your controls and content.
*/
class MainComponent   : public Component
{
public:
    //==============================================================================
    MainComponent();
    ~MainComponent();

    //==============================================================================
    void paint (Graphics&) override;
    void resized() override;

private:
    //==============================================================================
    // Your private member variables go here...
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (MainComponent)
	
		// WallComponent se convierte en 'hijo' de 'MainComponent' (herencia)
		WallComponent wall; // objeto 'wall'
		GrassComponent grass; // objeto 'grass'
		RoofComponent roof; // objeto 'roof'
		SunComponent sun; // objeto 'sun'
		TextComponent text; // objeto 'text'
};
