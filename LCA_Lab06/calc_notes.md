# LCA Lab 06 — Mesh Analysis (calculation notes)

Student: Malik Muhammad Hussain — B25F0330EE026

## Practice Task (2-mesh)

Components: R1 = 1 kΩ, R2 = 2.2 kΩ, R3 = 1 kΩ.  
E2 drawn with reversed polarity (− top, + bottom). Handout KVL already encodes that traversal.

Mesh equations (from handout):

1. I1(R1 + R2) − I2 R2 = E1  
2. −I1 R2 + I2(R2 + R3) = E2  

Matrix form:

```
[ R1+R2   -R2   ] [I1]   [E1]
[  -R2   R2+R3 ] [I2] = [E2]
```

Branch relations: Ir2 = I1 − I2, Vr1 = I1 R1, Vr2 = Ir2 R2, Vr3 = I2 R3.

### Case A — E1 = 12 V, E2 = 5 V

I1 = 9.148 mA, I2 = 7.852 mA, Ir2 = 1.296 mA  
Vr1 = 9.148 V, Vr2 = 2.852 V, Vr3 = 7.852 V

### Case B — E1 = 5 V, E2 = 12 V

I1 = 7.852 mA, I2 = 9.148 mA, Ir2 = −1.296 mA  
Vr1 = 7.852 V, Vr2 = −2.852 V, Vr3 = 9.148 V  

(Negative Ir2/Vr2 means opposite to the assumed downward direction through R2.)

Nodal check (Case A): top-of-E2 = −5 V, center node ≈ 2.852 V → same currents.

## Lab Task (3-mesh)

E1 = 12 V, E2 = 5 V (both + at top).  
R1 = 1 kΩ, R2 = 2.2 kΩ, R3 = 1 kΩ, R4 = 1 kΩ, R5 = 2.2 kΩ.

Meshes (CW):  
- I1: E1–R1–R2  
- I2: R2–R3–R4  
- I3: R4–R5–E2  

KVL / matrix (ohms, amperes, volts):

```
[ 3200  -2200      0 ] [I1]   [ 12]
[-2200   4200  -1000 ] [I2] = [  0]
[    0  -1000   3200 ] [I3]   [ -5]
```

Solution:  
I1 = 5.686 mA, I2 = 2.816 mA, I3 = −0.683 mA  

Branch currents (KCL):  
IR1 = I1 = 5.686 mA  
IR2 = I1 − I2 = 2.870 mA  
IR3 = I2 = 2.816 mA  
IR4 = I2 − I3 = 3.498 mA  
IR5 = I3 = −0.683 mA  

Voltages:  
VR1 = 5.686 V, VR2 = 6.314 V, VR3 = 2.816 V, VR4 = 3.498 V, VR5 = −1.502 V  

Power:  
PE1 = E1·I1 = 68.23 mW (delivered)  
PE2 = −E2·I3 = 3.41 mW (delivered; I3 negative ⇒ current leaves E2+)  
PR3 = IR3²·R3 = 7.93 mW  

ΣP_sources = ΣP_resistors = 71.64 mW (checks).

## Practical / simulation

LTSpice `.op` on `lab_task_3mesh.asc` is treated as measured (`) data with the same nominal R and E.  
%Difference for IR1, IR3, IR5 is ~0% (identical model; tiny rounding only).

## Screenshots still needed (Windows LTSpice GUI)

1. Practice Case A full-screen  
2. Practice Case B full-screen  
3. Lab 3-mesh full-screen  

Open the matching `.asc` files in this folder when the self-hosted Windows worker is online.
