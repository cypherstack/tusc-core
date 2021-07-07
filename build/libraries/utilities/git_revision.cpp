#include <stdint.h>
#include <graphene/utilities/git_revision.hpp>

#define GRAPHENE_GIT_REVISION_SHA "55c3282165a0dabf420ddaa0a1b8373258167bc5"
#define GRAPHENE_GIT_REVISION_UNIX_TIMESTAMP 1625691127
#define GRAPHENE_GIT_REVISION_DESCRIPTION "unknown"

namespace graphene { namespace utilities {

const char* const git_revision_sha = GRAPHENE_GIT_REVISION_SHA;
const uint32_t git_revision_unix_timestamp = GRAPHENE_GIT_REVISION_UNIX_TIMESTAMP;
const char* const git_revision_description = GRAPHENE_GIT_REVISION_DESCRIPTION;

} } // end namespace graphene::utilities
