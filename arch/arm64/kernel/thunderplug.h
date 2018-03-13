#define ENABLED 0
#define DISABLED 1

#define POWER_SAVER 0
#define BALANCED 6
#define TURBO 8

#define HOTPLUG_PERCORE 1
#define HOTPLUG_SCHED 2

extern int sched_set_boost(int enable);
