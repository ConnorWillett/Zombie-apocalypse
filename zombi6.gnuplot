set term png
set title "population vs time"
set xlabel "time"
set ylabel "population"

plot "zombi6.dat" using 1:2 with lines t "Susceptible",\
"zombi6.dat" using 1:3 with lines t "Zombie",\
"zombi6.dat" using 1:4 with lines t "Removed",\
"zombi6.dat" using 1:5 with lines t "Robots"
