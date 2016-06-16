#ifndef CONVERSION_ELIMINATION_PASS_H
#define CONVERSION_ELIMINATION_PASS_H

#ifdef __cplusplus
extern "C" {
#endif

struct ir_s;

extern const char *cve_name;

void cve_run(struct ir_s *ir);

#ifdef __cplusplus
}
#endif

#endif