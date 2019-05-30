This is the ScoreBarChart README.md
# ScoreBarchart 1.0
## Author: https://github.com/PascalMuenzer
## IG: https://www.instagram.com/pascal.mzr/
An algorithm to dislpay scores on a CLI (Command Line Interface)
I coded this algorithm following [Lecture 2 of Harvard University's CS50 2018 course ](https://www.youtube.com/watch?v=ba7e4mksR5I&list=PLWKjhJtqVAbmGw5fN5BQlwuug-8bDmabi&index=3) on YouTube
## How does it work ?
The algorithm uses two libraries.
[The Harvard CS50 libary for C](https://github.com/cs50/libcs50) and the [C Standard Input/Output Header (stdio.h)](https://www.gnu.org/software/m68hc11/examples/stdio_8h-source.html)

At first the user gets asked how many Scores to ask for.

In this case the 2 is entered as the number of scores to display

`Number of Scores: 2`

An array of two elements gets initialized

Next the user is asked to enter the values of each element.


> Element 0 (called 1 for human readability)

`Value of Score no. 1: 12`

> Element 1 (called 2 for human readability)

`Value of Score no. 2: 32`

Now that all scores are entered they are dislpayed as a Bar Chart of '#'

`Score 1: ############ ` 
> 12 '#'

`Score 2: ################################ `
> 32 '#'

## Usage:

First install [CS50s library](https://github.com/cs50/libcs50)

Then:

`git clone https://github.com/PascalMuenzer/ScoreBarChart.git`

`cd ScoreBarChart`

`gcc -o ScoreBarChart ScoreBarChart.c -lcs50`

`./ScoreBarChart`

### Try it!
