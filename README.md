# Problem Solving using C

Welcome to my C practice repository. This project collects beginner friendly C programs that I wrote while learning core problem solving logic.

## Repository details to set on GitHub

**Description**
Short description of this repository

**Website**
https://syllabuscal.ranjansharma.info.np

**Topics**
`c` `problem-solving` `beginner-friendly` `conditional-statements` `operators` `recursion` `programming-fundamentals`

## What is inside

This repo focuses on small, focused programs for:

- if and if-else based decisions
- arithmetic, relational, logical, and assignment operators
- recursion based math problems
- ternary operator based checks

## Folder overview

| Folder | Focus |
|---|---|
| `/operators` | Arithmetic, logical, relational, assignment, increment/decrement examples |
| `/if_if` | Decision making with independent `if` statements |
| `/if_else` | Decision making with `if-else` branches |
| `/recursions` | Recursive solutions for factorial, power, GCD, product, and sum |
| `/` (root) | Basic starter programs like odd/even, leap year, positive/negative, voting |

## Program map

```mermaid
flowchart TD
    A[Problem Solving in C] --> B[Operators]
    A --> C[Conditionals]
    A --> D[Recursion]
    A --> E[Basic Programs]

    B --> B1[arithmetic.c]
    B --> B2[logical.c]
    B --> B3[relation.c]
    B --> B4[assign.c]
    B --> B5[incre.c]

    C --> C1[if_if]
    C --> C2[if_else]
    C1 --> C11[max.c max3.c]
    C1 --> C12[odd.c leap.c voting.c positiveif.c male.c]
    C2 --> C21[greater.c odd.c leap.c votingife.c gender.c]

    D --> D1[factorial.c]
    D --> D2[power.c]
    D --> D3[GCD.c]
    D --> D4[star.c]
    D --> D5[natural.c]

    E --> E1[largest.c]
    E --> E2[odd.c]
    E --> E3[positive.c]
    E --> E4[voting.c]
    E --> E5[leap.c]
    E --> E6[scan.c]
```

## Decision flow diagram (example path)

```mermaid
flowchart LR
    S[Start] --> I[Read input]
    I --> J{Which concept?}
    J -->|Operators| K[Run operators examples]
    J -->|Conditionals| L[Run if_if or if_else examples]
    J -->|Recursion| M[Run recursion examples]
    K --> N[Observe output]
    L --> N
    M --> N
    N --> O[Compare logic and improve]
    O --> P[End]
```

## Build and run

Use the existing Makefile from the repository root:

```bash
make clean
make
./main
```

## Notes

- This is a learning repository, so some files are experiments in progress.
- Program style may vary from file to file because examples were written while practicing different concepts.
- The live website linked above is the project website reference.
