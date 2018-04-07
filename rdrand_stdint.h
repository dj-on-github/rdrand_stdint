#include <stdint.h>

extern int rdrand16_step(unsigned short int *);
extern int rdseed16_step(unsigned short int *);

extern int rdrand32_step(uint32_t *);
extern int rdseed32_step(uint32_t *);

extern int rdrand64_step(uint64_t *);
extern int rdseed64_step(uint64_t *);

extern int rdrand_get_uint32_retry(uint32_t retry_limit, uint32_t *dest);
extern int rdseed_get_uint32_retry(uint32_t retry_limit, uint32_t *dest);
extern int rdrand_get_uint64_retry(uint32_t retry_limit, uint64_t *dest);
extern int rdseed_get_uint64_retry(uint32_t retry_limit, uint64_t *dest);

extern int rdrand_check_support();
extern int rdseed_check_support();

