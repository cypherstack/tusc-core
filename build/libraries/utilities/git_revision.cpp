#include <stdint.h>
#include <graphene/utilities/git_revision.hpp>

#define GRAPHENE_GIT_REVISION_SHA "b4ff88ca739521dca05c00dc57d2446707545ca1"
#define GRAPHENE_GIT_REVISION_UNIX_TIMESTAMP 1624784376
#define GRAPHENE_GIT_REVISION_DESCRIPTION "2.0.171025-minor-fix-1-3677-gb4ff88ca"

namespace graphene { namespace utilities {

const char* const git_revision_sha = GRAPHENE_GIT_REVISION_SHA;
const uint32_t git_revision_unix_timestamp = GRAPHENE_GIT_REVISION_UNIX_TIMESTAMP;
const char* const git_revision_description = GRAPHENE_GIT_REVISION_DESCRIPTION;

} } // end namespace graphene::utilities
