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

Constant folding has minimal or no direct impact on memory usage itself. The SEE technique did not affect heap memory allocation as much as it affected instruction count and runtime. Runtime and instruction count heavily decreased when using SEE. Dead code elimination generally reduces memory usage. General code motion could slightly increase memory usage depending on how it is applied, but we did not see any change. Loop invariant code motion may increase memory usage slightly, but the net effect we saw was a substantial performance improvement.

---

2. Which techniques provided the most improvement on the Raspberry Pi, and why?

Loop Invariant Code Motion seemed to show the greatest improvement (about 5x) of runtime when implemented on the raspberry pi. In the extreme case, Dead Code Elimination also showed a decently sized improvement at about a 2 second difference in runtime for our example. 

---

3. How does knowing these optimizations influence your coding approach, especially
for devices like Raspberry Pi?

Knowing these optimization techniques gives us a look underneath the hood of the compiler and helps us understand how memory, runtime, and instruction count can be affected by our coding principles. When we are coding, we can make sure to use some of these principles to squeeze out a better runtime or memory complexity. Dead code elimination helps reduce the size of the codebase by removing unreachable or redundant code, which saves memory. Loop invariant code motion improves performance by moving calculations that don’t change across iterations outside of loops, reducing redundant computation. These optimizations are particularly effective in embedded systems, where both memory and CPU cycles are limited.

---

4. How would you selectively apply these optimizations in memory-constrained
environments?

In memory-constrained environments like our raspberry pi, you need to be mindful of the trade-offs between performance gains and memory usage. Dead code elimination should always be applied first, as it reduces unused code without significant cost. Constant folding is also generally safe and beneficial, as it minimizes unnecessary computations. Loop invariant code motion is effective in critical loops but should be used judiciously to avoid excessive memory usage for variables that are moved outside the loop. Loop unrolling should be applied only to small loops, as it can increase code size and may not be suitable for large or complex loops.

---

5. How does this knowledge affect algorithm development, and how would you apply
it in real-world coding?

Understanding these optimizations affects how we design algorithms for embedded systems like the raspberry pi. Constant folding and dead code elimination are low-cost optimizations that should be applied wherever possible without sacrificing clarity. For performance-critical sections, loop invariant code motion and loop unrolling can significantly boost efficiency. In real-world coding, these optimizations should be applied selectively based on profiling results, balancing code readability with performance and memory constraints.


---
