# The-Periodic-Table

## Overview
A command-line periodic table explorer that enables users to retrieve comprehensive chemical element information through an interactive interface.

## Features
- **Periodic Table Display**: Shows a text-based representation of the periodic table
- **Element Information Retrieval**: Provides detailed data for elements by their atomic number
- **Interactive User Interface**: Allows users to select elements and exit the program

## Dependencies
- Standard C Libraries:
  - `<stdbool.h>`
  - `<stdio.h>`
  - `<stdlib.h>`
  - `<string.h>`

## Compilation
```bash
gcc -o periodic_table periodic_table.c
```

## Usage
1. Run the program
2. View the periodic table display
3. Enter an element's atomic number to see its details
4. Type "exit" to close the program

## Program Structure

### Main Functions
- `GenerateThePeriodicTable()`: Displays the periodic table layout
- `TheElements(int _Select)`: Retrieves and displays element information

## Input Handling
- Accepts numeric input for element selection
- Supports "exit" command to terminate the program
- Uses `fgets()` for safe input reading
- Converts input to integer using `atoi()`
- Safely handles invalid input to prevent unexpected program behavior, ensuring the input is within the valid element range before processing

## Element Information Attributes
For each element, the program displays:
- Name
- Chemical Symbol
- Atomic Number
- Atomic Mass
- Group
- Period
- Electron Configuration

## Example Interaction
```c
1																			2
H																			He

3	4													5	6	7	8	9	10
Li	Be													B	C	N	O	F	Ne

11	12													13	14	15	16	17	18
Na	Mg													Al	Si	P	S	Cl	Ar

19	20			21	22	23	24	25	26	27	28	29	30	31	32	33	34	35	36
K	Ca			Sc	Ti	V	Cr	Mn	Fe	Co	Ni	Cu	Zn	Ga	Ge	As	Se	Br	Kr

37	38			39	40	41	42	43	44	45	46	47	48	49	50	51	52	53	54
Rb	Sr			Y	Zr	Nb	Mo	Tc	Ru	Rh	Pd	Ag	Cd	In	Sn	Sb	Te	I	Xe

55	56	57-70	71	72	73	74	75	76	77	78	79	80	81	82	83	84	85	86
Cs	Ba	*		Lu	Hf	Ta	W	Re	Os	Ir	Pt	Au	Hg	Tl	Pb	Bi	Po	At	Rn

87	88	89-102	103	104	105	106	107	108	109	110	111	112	113	114	115	116	117	118
Fr	Ra	**		Lr	Rf	Db	Sg	Bh	Hs	Mt	Ds	Rg	Cn	Nh	Fl	Mc	Lv	Ts	Og

		*		57	58	59	60	61	62	63	64	65	66	67	68	69	70
				La	Ce	Pr	Nd	Pm	Sm	Eu	Gd	Tb	Dy	Ho	Er	Tm	Yb

		**		89	90	91	92	93	94	95	96	97	98	99	100	101	102
				Ac	Th	Pa	U	Np	Pu	Am	Cm	Bk	Cf	Es	Fm	Md	No

Please select an element by its number
Enter the following to ecit: "exit"
User: 11

Name:   Sodium
Symbol: Na
Atomic Number:  11
Atomic Mass:    22.99 g/mol
Group:  1 (Alkali metal)
Period: 3
Electron Configuration:   [Ne] 3s¹

User: exit

Goodbye user
```

## Potential Improvements
- Create a more interactive UI
- Add search by element name

## License
MIT

## Author
NewKnave

## Version
1.0.0

## Contributing

Contributions are welcome! Submit a pull request or open an issue on the project.
