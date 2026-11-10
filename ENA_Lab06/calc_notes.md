# ENA Lab 06 — calculation notes

Student: Malik Muhammad Hussain, B25F0330EE026

## Locked conditions
- C=10 nF, L=10 mH, R=1 kΩ (ignore figure 1.2 mH / 470 pF)
- E1: 2 Vpp @ 1 kHz; E2: 2 Vpp @ 10 kHz
- FG / replacement Z = 50 Ω
- Do not use handout 200 kHz lines

## Theory (Vpp)
| Case | E1 | E2 | VR |
|------|-----|-----|-----|
| Source 1 only | 1.9044 | 0.0060 | 1.9081 |
| Source 2 only | 0.0668 | 1.9782 | 0.8426 |
| Sum (Table 3 theory) | 1.9712 | 1.9842 | 2.7507 |
| VR beat min | | | 1.0656 |

## LTSpice experimental (.meas PP)
| Case | E1 | E2 | VR |
|------|-----|-----|-----|
| Source 1 only | 1.9044 | 0.0064 | 1.9081 |
| Source 2 only | 0.0669 | 1.9782 | 0.8485 |
| Both sources | 1.9490 | 1.9841 | 2.7271 |
