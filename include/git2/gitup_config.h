#include "config.h"

GIT_BEGIN_DECL

/**
 * Locate the path to the local configuration file
 *
 * The returned path may be used on any `git_config` call to load the local
 * configuration file.
 *
 * @param repo The repository whose local configuration file to find
 * @param out Pointer to a user-allocated git_buf in which to store the path
 * @return 0 if a local configuration file has been found. Its path will be stored in `out`.
 */
GIT_EXTERN(int) git_config_find_local(git_repository *repo, git_buf *out);

GIT_END_DECL
