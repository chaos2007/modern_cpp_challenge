#ifndef CPPCHALLENGER_GREATEST_COMMON_DIVISOR_H
#define CPPCHALLENGER_GREATEST_COMMON_DIVISOR_H

int greatest_common_divisor(int num_1, int num_2)
{
    if( num_2 == 0 ) {
        return num_1;
    }
    if( num_1 == 0 ) {
        return num_2;
    }
    return greatest_common_divisor(num_2, num_1 % num_2);
}

#endif //CPPCHALLENGER_GREATEST_COMMON_DIVISOR_H
