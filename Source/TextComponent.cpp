/*
  ==============================================================================

    TextComponent.cpp
    Created: 18 Apr 2019 7:48:13pm
    Author:  Luciano Schillagi

  ==============================================================================
*/

#include "../JuceLibraryCode/JuceHeader.h"
#include "TextComponent.h"

//==============================================================================
TextComponent::TextComponent()
{
    // In your constructor, you should add any child components, and
    // initialise any special settings that your component needs.

}

TextComponent::~TextComponent()
{
}

void TextComponent::paint (Graphics& g)
{
	Font theFont ("Courier", "Regular", 30.0f);
	g.setFont(theFont);
	g.drawText("The Audio Programmer", 10, 10, 400, 60, Justification::topLeft);
}

void TextComponent::resized()
{
    // This method is where you should set the bounds of any child
    // components that your component contains..

}
