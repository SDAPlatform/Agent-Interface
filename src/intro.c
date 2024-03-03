#include <assert.h>
#include <stdio.h>
#include <stdlib.h>


#define __IMPORT(module, name) __attribute__((__import_module__(#module), __import_name__(#name)))
extern char* _http_post_request_runtime(char* p) __IMPORT(runtime, _http_post_request_runtime);
extern void _start(void);




__attribute__((export_name("run")))
char* run(const char* input) {

}

