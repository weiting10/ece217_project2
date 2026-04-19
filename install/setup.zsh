# generated from colcon_zsh/shell/template/prefix_chain.zsh.em

# This script extends the environment with the environment of other prefix
# paths which were sourced when this file was generated as well as all packages
# contained in this prefix path.

# function to source another script with conditional trace output
# first argument: the path of the script
_colcon_prefix_chain_zsh_source_script() {
  if [ -f "$1" ]; then
    if [ -n "$COLCON_TRACE" ]; then
      echo "# . \"$1\""
    fi
    . "$1"
  else
    echo "not found: \"$1\"" 1>&2
  fi
}

# source chained prefixes
# setting COLCON_CURRENT_PREFIX avoids determining the prefix in the sourced script
COLCON_CURRENT_PREFIX="/gpfs/fs1/sfw3/rhel9-x86_64/miniforge3/25.11.0-1/envs/ros2_env"
_colcon_prefix_chain_zsh_source_script "$COLCON_CURRENT_PREFIX/local_setup.zsh"

# source this prefix
# setting COLCON_CURRENT_PREFIX avoids determining the prefix in the sourced script
COLCON_CURRENT_PREFIX="$(builtin cd -q "`dirname "${(%):-%N}"`" > /dev/null && pwd)"
_colcon_prefix_chain_zsh_source_script "$COLCON_CURRENT_PREFIX/local_setup.zsh"

unset COLCON_CURRENT_PREFIX
unset _colcon_prefix_chain_zsh_source_script
