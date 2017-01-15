# Furbox
Furry twist on the Useless Box concept
v2.0

This is the Furbox project (formerly Fox Box).  The idea is to expand on the Useless Box concept by giving the mechanism a personality, ala mechanically recreated behaviors and a stuffed animal "resident" that lives inside the box.

Version 2.0 hardware is built on 2 servo motors, 1 SPST or similar toggle switch, and 1 NeoPixel LED light.
- 1 servo (pin 9) is used to lift the lid (with attached plush head making it appear as though the plush has lifted the lid.
- 1 servo (pin 10) is connected to the arm which turns off the switch.
- The switch (pin 12 internal pullup) controls the overhead light.
- The NeoPixel light (pin 11) is used for cost (roughly 10 cents per light) but can also be programmed for different colors as necessary.

Version 2.0 software utilizes a reactive and random sequence engine as well as an action rating engine, making "frustrated" actions more likely with subsequent button toggles.
Sequence animations are split into 4 categories; Reaction, action, reset, and an optional peek.
- Reaction is the reaction to the switch being toggled and involves ultimately opening the lid to make room for the paw.
- Action is the action of turning the switch off.
- Reset is the process of returning to a rest state, retracting the paw and closing the lid.
- Peek is a rarer animation and doesn't always trigger even in frustrated mode.  Peek waits a set time before opening the lid again to check and make sure the user isn't about to toggle the switch again.  Peek can include covering the switch to prevent toggling.

The Frustration level increases every time the button is flipped and decays over time after the Peek phase is complete.  Increased frustration makes designated frustrated animations more likely to trigger and increases the likelihood of the peek event.

Pretoggle
The switch state is checked between each phase.  In the event the switch is toggled back to off before the Action phase is triggered, there is a pause, Frustration is lowered by an random amount, and the action sequence is skipped.  In the event the switch is toggled back to on before the Peek phase is complete, the sequence will reset to the start and skip Reaction if Reset has not been started.
