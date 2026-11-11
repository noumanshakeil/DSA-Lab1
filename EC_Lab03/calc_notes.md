# EC Lab 03 calculation notes

## Part A (DC), R=1 kΩ
I = V/R → 5,10,15,20,25,30 mA for V=5…30 V. LTSpice matches; %Error = 0%.

## Part A (DC), R=2.2 kΩ
I = V/2200 → 2.273, 4.545, 6.818, 9.091, 11.364, 13.636 mA. %Error = 0%.

## Task 2 AC (50 Hz), R=1 kΩ
Vpeak = Vrms×√2; measured Vrms/Irms match Vrms/R (linear).

## LED
Series 1 kΩ + LED model; non-linear forward conduction — resistor voltage not a pure scaled sine.
