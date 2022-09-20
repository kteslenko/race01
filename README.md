# Race 01
Our team's solution for Race 01.
Made with Jaroslav Pryshchepa and Danylo Samojlenko.

# Examples

```
> ./part_of_the_matrix | /bin/cat -e
usage: ./part_of_the_matrix [operand1] [operation] [operand2] [result]

> ./part_of_the_matrix "xxx" "+" "?0?" "1?0" | /bin/cat -e
Invalid operand: xxx

> ./part_of_the_matrix "xxx" "??" "?0?" "1?0" | /bin/cat -e
Invalid operation: ??

> ./part_of_the_matrix "???" "??" "XXX" "1?0" | /bin/cat -e
Invalid operation: ??

> ./part_of_the_matrix "???" "-" "100" "?" | /bin/cat -e
100 - 100 = 0$
101 - 100 = 1$
102 - 100 = 2$
103 - 100 = 3$
104 - 100 = 4$
105 - 100 = 5$
106 - 100 = 6$
107 - 100 = 7$
108 - 100 = 8$
109 - 100 = 9$

> ./part_of_the_matrix "343111 " "      - " "?????? " "    32410" | /bin/cat -e
343111 - 310701 = 32410$

> ./part_of_the_matrix "?" "*" "11" "??" | /bin/cat -e
0 * 11 = 0$
1 * 11 = 11$
2 * 11 = 22$
3 * 11 = 33$
4 * 11 = 44$
5 * 11 = 55$
6 * 11 = 66$
7 * 11 = 77$
8 * 11 = 88$
9 * 11 = 99$

> ./part_of_the_matrix "  ??  " "  /  " "  11  " "  1  " | /bin/cat -e
11 / 11 = 1$
12 / 11 = 1$
13 / 11 = 1$
14 / 11 = 1$
15 / 11 = 1$
16 / 11 = 1$
17 / 11 = 1$
18 / 11 = 1$
19 / 11 = 1$
20 / 11 = 1$
21 / 11 = 1$

> ./part_of_the_matrix "69" "/" "0" "?" | /bin/cat -e

> ./part_of_the_matrix "?11" "+" "?0?" "1?0" | /bin/cat -e
11 + 109 = 120$
111 + 9 = 120$

> ./part_of_the_matrix "?" "?" "1" "8" | /bin/cat -e
7 + 1 = 8$
9 - 1 = 8$
8 * 1 = 8$
8 / 1 = 8$

> ./part_of_the_matrix "-3" "+" "-?4" "-2?" | /bin/cat -e
-3 + -24 = -27$

> ./part_of_the_matrix "-2" "?" "?2" "-2?" | /bin/cat -e
-2 - 22 = -24$
-2 * 12 = -24$
```
