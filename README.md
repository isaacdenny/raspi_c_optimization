# raspi_c_optimization
A group project focused on different optimization techniques and levels in programming. Tested on raspberry pi's

## Assignments

- [ ] Constant Folding - [Graham](https://github.com/gmccabe21212)
- [ ] Loop Unrolling - [Jaden](https://github.com/Vatvo)
- [ ] Dead Code Elimination - [Bryce](https://github.com/BryceCrispy522)
- [ ] Loop Invariant Code Motion - [Nicky](https://github.com/nickyrice04)
- [ ] Subexpression Elimination - [Isaac](https://github.com/isaacdenny)
- [ ] General Code Motion - [Jaden](https://github.com/Vatvo)

## Steps
1. Add code examples to a folder titled your assignment:

```
constant_folding/
    - optimized.c
    - unoptimized.c
    - ...
loop_unrolling/
    - optimized.c
    - unoptimized.c
    - ...
```

3. Compile with each optimization level on the pi's
4. Profile with Massif - Memory and cache performance changes from original to optimized
5. Document all info in a table below

## Device Info

- [ ] PC (spock - cloud system on campus) - 6.8GB of user-available space
- [ ] Raspberry Pi's - 95MB of user-available space

## Results

### Loop Invariant Code Motion

The table below shows runtime per System/Example combo

| System/Example      | -O0       | -O1       | -O2       | -O3       |
|---------------------|-----------|-----------|-----------|-----------|
| PC/Optimized        |0.015854   |0.015312   |0.015278   |0.015184   |
| PC/Unoptimized      |0.016202   |0.016056   |0.015966   |0.016053   |
| Rasp/Optimized      |0.020764   |0.01964    |0.018188   |0.0172570  |
| Rasp/Unoptimized    |0.05176    |0.051498   |0.050881   |0.017397   |

The table below shows Memory Usage per System/Example combo in KB

| System/Example      | -O0       | -O1       | -O2       | -O3       |
|---------------------|-----------|-----------|-----------|-----------|
| PC/Optimized        |1.008      |1.008      |1.008      |1.008      |
| PC/Unoptimized      |1.008      |1.008      |1.008      |1.008      |
| Rasp/Optimized      |1.008      |1.008      |1.008      |1.008      |
| Rasp/Unoptimized    |1.008      |1.008      |1.008      |1.008      |

The table below shows total instruction count per System/Example combo in millions

| System/Example      | -O0       | -O1       | -O2       | -O3       |
|---------------------|-----------|-----------|-----------|-----------|
| PC/Optimized        |30.02      |25.39      |21.82      |21.82      |
| PC/Unoptimized      |78.40      |52.22      |40.26      |27.46      |
| Rasp/Optimized      |48.02      |17.78      |16.55      |16.55      |
| Rasp/Unoptimized    |86.36      |31.22      |29.67      |19.52      |

### Loop Unrolling

The table below shows runtime per System/Example combo

| System/Example      | -O0       | -O1       | -O2       | -O3       |
|---------------------|-----------|-----------|-----------|-----------|
| PC/Optimized        |0.618      |0.588      |0.572      |0.620      |
| PC/Unoptimized      |0.644      |0.578      |0.626      |0.630      |
| Rasp/Optimized      |1.494      |1.054      |1.035      |1.030      |
| Rasp/Unoptimized    |1.066      |1.061      |1.053      |1.056      |

The table below shows Memory Usage per System/Example combo in KB

| System/Example      | -O0       | -O1       | -O2       | -O3       |
|---------------------|-----------|-----------|-----------|-----------|
| PC/Optimized        |1.008      |1.008      |1.008      |1.008      |
| PC/Unoptimized      |1.008      |1.008      |1.008      |1.008      |
| Rasp/Optimized      |1.008      |1.008      |1.008      |1.008      |
| Rasp/Unoptimized    |1.008      |1.008      |1.008      |1.008      |

The table below shows total instruction count per System/Example combo in millions

| System/Example      | -O0       | -O1       | -O2       | -O3       |
|---------------------|-----------|-----------|-----------|-----------|
| PC/Optimized        |683.6      |632.7      |557.2      |557.2      |
| PC/Unoptimized      |747.4      |663.7      |589.7      |589.7      |
| Rasp/Optimized      |846.0      |439.6      |426.3      |426.3      |
| Rasp/Unoptimized    |1045.0     |470.3      |458.8      |458.8      |

### Subexpression Elimination ***SEE***

The table below shows runtime per System/Example combo

| System/Example   |   -O0    |   -O1    |   -O2    |   -O3    | 
| ---------------- | -------- | -------- | -------- | -------- |
| PC/Optimized     | 0.129317 | 0.051817 | 0.056084 | 0.055378 |
| PC/Unoptimized   | 0.166281 | 0.051825 | 0.055457 | 0.054935 |
| Rasp/Optimized   | 0.093649 | 0.078177 | 0.073390 | 0.070039 |
| Rasp/Unoptimized | 0.111432 | 0.078179 | 0.073462 | 0.070319 |

The table below shows Memory Usage per System/Example combo in MB

| System/Example   |   -O0    |   -O1    |   -O2    |   -O3    | 
| ---------------- | -------- | -------- | -------- | -------- |
| PC/Optimized     |   15.27  |   15.27  |   15.27  |   15.27  |
| PC/Unoptimized   |   15.27  |   15.27  |   15.27  |   15.27  |
| Rasp/Optimized   |   15.27  |   15.27  |   15.27  |   15.27  |
| Rasp/Unoptimized |   15.27  |   15.27  |   15.27  |   15.27  |

The table below shows total instruction count per System/Example combo in millions

| System/Example   |   -O0    |   -O1    |   -O2    |   -O3    | 
| ---------------- | -------- | -------- | -------- | -------- |
| PC/Optimized     |   75.50  |   25.91  |   17.57  |   17.57  |
| PC/Unoptimized   |   109.8  |   25.91  |   17.57  |   17.57  |
| Rasp/Optimized   |   81.18  |   19.19  |   17.29  |   13.95  |
| Rasp/Unoptimized |   104.1  |   19.19  |   17.29  |   13.95  |

### Constant Folding 
The table below shows runtime per System/Example combo

| System/Example   |   -O0    |   -O1    |   -O2    |   -O3    | 
| ---------------- | -------- | -------- | -------- | -------- |
| PC/Optimized     | 3.062709 | 1.310089 | 0.000155 | 0.000183 |
| PC/Unoptimized   | 3.069830 | 1.308761 | 0.000154 | 0.000154 |
| Rasp/Optimized   | 9.197837 | 4.805766 | 0.000288 | 0.000290 |
| Rasp/Unoptimized | 9.182641 | 4.804444 | 0.000304 | 0.000305 |

Memory Usage was too insignificant to quantify 

### Deadcode Elimination 

The table below shows runtime per System/Example combo

| System/Example   |   -O0    |   -O1    |   -O2    |   -O3    | 
| ---------------- | -------- | -------- | -------- | -------- |
| PC/Optimized     | 0.131294 | 0.061107 | 0.072733 | 0.066597 |
| PC/Unoptimized   | 0.271766 | 0.060457 | 0.060710 | 0.060557 |
| Rasp/Optimized   | 0.477899 | 0.339684 | 0.338205 | 0.340249 |
| Rasp/Unoptimized | 2.565255 | 0.339816 | 0.338780 | 0.338030 |

The table below shows Memory Usage per System/Example combo in MB

| System/Example   |   -O0    |   -O1    |   -O2    |   -O3    | 
| ---------------- | -------- | -------- | -------- | -------- |
| PC/Optimized     |   19.35  |   19.35  |   19.35  |   19.35  |
| PC/Unoptimized   |   19.35  |   19.35  |   19.35  |   19.35  |
| Rasp/Optimized   |   19.35  |   19.35  |   19.35  |   19.35  |
| Rasp/Unoptimized |   19.35  |   19.35  |   19.35  |   19.35  |

## Challenges faced

1. Learning Github - Code reviews, Pull Requests, avoiding merge conflicts
2. Results were difficult to find in some cases (Constant Folding) because the compiler implements the technique immediately, rendering the examples identical

## Reflection Questions

1. How did each optimization technique impact memory usage according to Massif,
and why?

The SEE technique did not affect heap memory allocation as much as it affected instruction count and runtime. Runtime and instruction count heavily decreased when using SEE.

---

2. Which techniques provided the most improvement on the Raspberry Pi, and why?



---

3. How does knowing these optimizations influence your coding approach, especially
for devices like Raspberry Pi?

Knowing these optimization techniques gives us a look underneath the hood of the compiler and helps us understand how memory can be affected by our coding principles.



---

4. How would you selectively apply these optimizations in memory-constrained
environments?



---

5. How does this knowledge affect algorithm development, and how would you apply
it in real-world coding?

Knowledge of certain principles like loop-invariant code motion can be a great optimization tool to sqeeze runtime out of algorithms in an interview or work environment. 


---
