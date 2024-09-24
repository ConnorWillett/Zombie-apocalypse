set term png 
set title "population vs time"
set xlabel "time"
set ylabel "population"
set key top left

plot "zombi2.dat" using 1:2 with lines t "Susceptible",\
"zombi2.dat" using 1:3 with lines t "Infected",\
"zombi2.dat" using 1:4 with lines t "zombis",\
"zombi2.dat" using 1:5 with lines t "Removed"
