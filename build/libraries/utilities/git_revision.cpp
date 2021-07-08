#include <stdint.h>
#include <graphene/utilities/git_revision.hpp>

#define GRAPHENE_GIT_REVISION_SHA "dcba58555f37b46d038f9bd99d92db14aa27a765"
#define GRAPHENE_GIT_REVISION_UNIX_TIMESTAMP 1625778755
#define GRAPHENE_GIT_REVISION_DESCRIPTION "unknown"

namespace graphene { namespace utilities {

const char* const git_revision_sha = GRAPHENE_GIT_REVISION_SHA;
const uint32_t git_revision_unix_timestamp = GRAPHENE_GIT_REVISION_UNIX_TIMESTAMP;
const char* const git_revision_description = GRAPHENE_GIT_REVISION_DESCRIPTION;

} } // end namespace graphene::utilities
