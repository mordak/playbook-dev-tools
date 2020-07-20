# Run this script on phone after Python is installed to get pip working

PYTHONPATH="$NATIVE_TOOLS/lib/python3.2:$NATIVE_TOOLS/lib/python3.2/lib-dynload"
PYTHONHOME="$NATIVE_TOOLS"

echo 'export PYTHONPATH="$NATIVE_TOOLS/lib/python3.2:$NATIVE_TOOLS/lib/python3.2/lib-dynload"' >> $HOME/.profile
echo 'export PYTHONHOME="$NATIVE_TOOLS"' >> $HOME/.profile

TEMP_FOLDER=$TEMP/$(date '+%s')
mkdir $TEMP
mkdir $TEMP_FOLDER

install ()
{
	declare name="$1"
	declare url="$2"
	declare setup_filename="$3"
	cd $TEMP_FOLDER
	wget $url
	tar xvf $name.tar.gz
	cd $name
	python $setup_filename
}


SETUPTOOLS="setuptools-0.7.2"
SETUPTOOLS_URL="https://files.pythonhosted.org/packages/82/bc/48dbb17f35116a6348197e249a2780b66d5d5d9ded73d7e56cb939e04bd5/setuptools-0.7.2.tar.gz"

install $SETUPTOOLS $SETUPTOOLS_URL "ez_setup.py"

PIP="pip-1.2.1"
PIP_URL="https://files.pythonhosted.org/packages/c3/a2/a63244da32afd9ce9a8ca1bd86e71610039adea8b8314046ebe5047527a6/pip-1.2.1.tar.gz"

install $PIP $PIP_URL "setup.py install"

# pip install complains about not being able to access the index url.
# However if we pass the --index-url flag directly somehow it works.
# So we can install stuff more conveniently by calling `pipi` using this alias:
echo "alias pipi='pip install --index-url=https://pypi.python.org/simple/'" >> $HOME/.profile

cd $HOME
rm -rf $TEMP_FOLDER

pip install --index-url=https://pypi.python.org/simple setuptools==7.0 pip==7.1.1

