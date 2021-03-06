#
# Invoke autowrap to generate wrapper sources
# then generate wrapem.obj 
#

MYDLL = $(BASEDIR)\public\sdk\lib\$(TARGET_DIRECTORY)\ole32.dll

obj\$(TARGET_DIRECTORY)\wrapem.obj: $(TARGET_DIRECTORY)\wrapem.$(ASM_SUFFIX)

# If dll has changed, force recompilation of sources
$(TARGET_DIRECTORY)\wrapem.$(ASM_SUFFIX): $(MYDLL)
	autowrap  $(MYDLL)
	del /q obj\$(TARGET_DIRECTORY)\zle32.obj

clean:
	del /q wrapper.c wrapper.h $(TARGET_DIRECTORY)\* obj\$(TARGET_DIRECTORY)\*

