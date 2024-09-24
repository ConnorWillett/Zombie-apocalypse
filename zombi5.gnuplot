set term png
set title "population vs time"
set xlabel "time"
set ylabel "population"

plot "zombi5.dat" using 1:2 with lines t "Susceptible", "zombi5.dat" using 1:3 with lines t "Zombie", "zombi5.dat" using 1:4 with lines t "Removed"
