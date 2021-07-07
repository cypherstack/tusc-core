#include <stdint.h>
#include <graphene/utilities/git_revision.hpp>

#define GRAPHENE_GIT_REVISION_SHA "7df1162e4136ae904f2165ced879f0c6a33ea8dc"
#define GRAPHENE_GIT_REVISION_UNIX_TIMESTAMP 1625695162
#define GRAPHENE_GIT_REVISION_DESCRIPTION "unknown"

namespace graphene { namespace utilities {

const char* const git_revision_sha = GRAPHENE_GIT_REVISION_SHA;
const uint32_t git_revision_unix_timestamp = GRAPHENE_GIT_REVISION_UNIX_TIMESTAMP;
const char* const git_revision_description = GRAPHENE_GIT_REVISION_DESCRIPTION;

} } // end namespace graphene::utilities
