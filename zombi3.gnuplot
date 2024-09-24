set term png
set title "population vs time"
set xlabel "time"
set ylabel "population"
set key top left

plot "zombi3.dat" using 1:2 with lines t "Susceptible",\
"zombi3.dat" using 1:3 with lines t "Infected",\
"zombi3.dat" using 1:4 with lines t "zombis",\
"zombi3.dat" using 1:5 with lines t "Removed",\
"zombi3.dat" using 1:6 with lines t "Quarantine"

