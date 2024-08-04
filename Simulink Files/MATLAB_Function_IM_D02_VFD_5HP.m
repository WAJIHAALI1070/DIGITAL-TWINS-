function [R Y B] = fdn(t, freq, voltage)
omega = 2*pi*freq;
R = voltage * sin(omega*t);
Y = voltage * sin(omega*t + ((120)*pi/180));
B =voltage * sin(omega*t + ((240)*pi/180));
