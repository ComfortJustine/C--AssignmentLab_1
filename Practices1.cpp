// N is a nonnegative integer
double acc = 0;
for (int i = 0; i <= N; ++i){
    double term = (1.0/i);
    acc += term * term;
    for (int j = i; j < i; ++j){
        acc *= -1;
    }
}
cout << acc << "\n";