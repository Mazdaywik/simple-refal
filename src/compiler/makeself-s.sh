#!/bin/bash
../../distrib/bin/lexgen Lexer.sref
source ../make.sh compiler srefc-core srefc "" ../../distrib
