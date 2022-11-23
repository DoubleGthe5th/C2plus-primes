#include <iostream>
#include <vector>

//prime number generator using standard method of calculating primes

int main()
{
    for(int x = 0;x<10;x++){
    std::vector<int> primes;
    primes.push_back(2);
    primes.push_back(3);
    time_t start, end;
    time(&start);

    for(int i=6; i < 10000000; i+=6){
        const int m = i-1;
        const int n = i+1;
        bool prime=true;
        for(int j=0;j<primes.size() && primes[j]*primes[j] <= i;j++)
        {
            if(m % primes[j] == 0)
            {
                prime=false;
                break;
            }
        }
        if(prime) 
        {
            primes.push_back(i-1);
        }
        prime=true;
        for(int j=0;j<primes.size() && primes[j]*primes[j] <= i;j++)
        {
            if(n % primes[j] == 0)
            {
                prime=false;
                break;
            }
        }
        if(prime) 
        {
            primes.push_back((i+1));
        }
    }
    time(&end);
    // Calculating total time taken by the program.
    double time_taken = double(end - start);
    std::cout << time_taken;
    std::cout << "\n";

    }    
    return 0;
}
