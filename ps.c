#include "types.h"
#include "user.h"
#include "pstat.h"

int main() {
    struct pstat ps;
    getpinfo(&ps);

    int i;
    for (i = 0; i < NPROC; i++) {
        if (!ps.inuse[i]) continue;
        printf(1, "%d. PID: %d | TICKETS: %d | TIME: %d\n", i, ps.pid[i], ps.tickets[i], ps.ticks[i]);
    }
    exit();
}