#include <stdio.h>

int main() {
    float cp, sp, profit, loss, percentage;

    scanf("%f %f", &cp, &sp);

    if (sp > cp) {
        profit = sp - cp;
        percentage = (profit / cp) * 100;
        printf("Profit %.0f%%\n", percentage);
    } else if (sp < cp) {
        loss = cp - sp;
        percentage = (loss / cp) * 100;
        printf("Loss %.0f%%\n", percentage);
    } else {
        printf("No Profit No Loss\n");
    }

    return 0;
}
