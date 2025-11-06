cat "$(git rev-parse --show-toplevel)/.git/info/exclude" | grep -v "#"
