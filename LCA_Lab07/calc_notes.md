# LCA Lab Session 07 — Nodal Analysis calculation notes

Student: Malik Muhammad Hussain, Reg B25F0330EE026

LTSpice `.op` results (from `.cir` netlists) are treated as experimental/measured (`` ` ``) values.

## Practice Task (Fig A-2)

- V1=5 V, V2=9 V, R1=100 Ω, R2=220 Ω, R3=470 Ω
- Nodes: A = R1/R2/R3 junction (unknown), B = ground, C = V1+, D = V2+
- KCL at A: `(VA-V1)/100 + VA/220 + (VA-V2)/470 = 0`
- Linear form: `VA = a V1 + b V2` with `a=0.5998`, `b=0.1276`
- **VA = 4.147 V**
- |IR1|=8.527 mA, |IR2|=18.852 mA, |IR3|=10.325 mA
- Vab=4.147 V, Vac=-0.853 V, Vad=-4.853 V

## Figure A-1

- V1=5 V, V2=9 V, R1=2k, R2=1k, R3=4k, R5=4k
- KCL: `(VB-V1)/2000 + VB/1000 + VB/4000 + (VB-V2)/4000 = 0`
- **VB = (1/4)V1 + (1/8)V2 = 2.375 V**

## Tasks: Find VB, VC

- Vs1=3 V, Vs2=4 V; R1=1k, R2=2.2k, R3=1.5k, R4=3.3k, R5=820; ground at D
- **VB = 1.756 V**, **VC = 1.089 V**

Measured LTSpice values match calculated values (%Diff ≈ 0%).
