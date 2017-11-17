set terminal pdf
set output 'jubro.pdf'

set pm3d
set view map

set logscale cb
unset xtics
unset ytics

splot 'data' u 1:2:3 with image palette